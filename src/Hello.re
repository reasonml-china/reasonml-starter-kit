let component = ReasonReact.statelessComponent("Hello")


let make = (_children) => {
  ...component,
  render: _ => <h1>{ReasonReact.string("Hello, ReasonML!")}</h1>
}